# example API key model
class APIKey(db.Model):
    key = CharField()
    secret = CharField()
    user = ForeignKeyField(User)

# instantiating the auth
api_key_auth = APIKeyAuthentication(model=APIKey)